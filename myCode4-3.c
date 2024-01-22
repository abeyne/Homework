#include <stdio.h>

int main() {
    int age, is_member, hour, show ;
    float price{};

    printf("あなたの身分を選択してください\n\n60才以上　　　　　　：0\n一般　　　　　　　　：1\n大学生　　　　　　　：2\n高校・中学・小学生　：3\n\n");
    scanf_s("%d", &age);

    //入力に合わせて身分を確認する。
    switch (age)
    {

    case 0:
        printf("あなたは「60才以上」です。");
        break;
    case 1:
        printf("あなたは「一般」です。");
        break;
    case 2:
        printf("あなたは「大学生」です。");
        break;
    case 3:
        printf("あなたは「高校・中学・小学生」です。");
        break;

    default:
        break;
    }

    printf("\n\n次に、24時間表記で入場時刻を入力してください：\n");
    scanf_s("%d", &hour);

    //入力された時刻に合わせて適切なショーの選択肢を与える。
    switch (hour)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        printf("\n\nこの時間帯で利用可能なプログラムは以下の２つになります。\nご覧になりたいショーの形態はなんですか。\n\nモーニングショー：０\n通常　　　　　　：１\n\n");
        scanf_s("%d", &show);
        break;
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
        printf("この時刻帯では閲覧可能なショーの形態は「通常」のみとなります。");
        show = 1;
        break;
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
        printf("\n\nこの時間帯で利用可能なプログラムは以下の２つになります。\nご覧になりたいショーの形態はなんですか。\n\n通常　　　　：１\nナイトショー：２\n\n");
        scanf_s("%d", &show);
        break;
    default:
        printf("正しい時刻を入力してください。");
        return 1;
        break;
    }


    printf("\n\nあなたは会員ですか？\n\nいいえ　：0\nはい　　：1\n\n");
    scanf_s("%d", &is_member);

    //入力情報に合わせてチケットの値段をpriceに与える。
    switch (age)
    {
    case 0:
        switch (is_member)
        {
        case 0:
            price = 1200;
            break;
        case 1:
            price = 1000;
            break;
        default:
            break;
        }
        break;
    case 1:
        switch (show)
        {
        case 0:
            price = 1400;
            break;
        case 1:
            switch (is_member)
            {
            case 0:
                price = 1800;
                break;
            case 1:
                price = 1500;
                break;
            default:
                break;
            }
            break;
        case 2:
            price = 1400;
            break;
        default:
            break;
        }
        break;
    case 2:
        switch (show)
        {
        case 0:
            price = 1400;
            break;
        case 1:
            switch (is_member)
            {
            case 0:
                price = 1500;
                break;
            case 1:
                price = 1400;
                break;
            default:
                break;
            }
            break;
        case 2:
            price = 1400;
            break;
        default:
            break;
        }
        break;
    case 3:
        switch (hour)
        {
        case 0:
        case 1:
            switch (is_member)
            {
            case 0:
                price = 1000;
                break;
            case 1:
                price = 900;
                break;
            default:
                break;
            }
            break;
        case 2:
            printf("あなたは鑑賞不可能です。"); //高校生以下はナイトショー鑑賞不可
            return 1;
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }

    printf("\n\nあなたのチケットの値段は %.f 円です。\n", price);

    return 0;
}

// 区分、時刻、会員かどうか、料金判定、完全実装。