/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:36 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IGCommentModel;

@interface IGFeedItemRowItem : NSObject {

	int _type;
	IGCommentModel* _comment;

}

@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) IGCommentModel * comment;              //@synthesize comment=_comment - In the implementation block
+(id)rowItemOfType:(int)arg1 withComment:(id)arg2 ;
-(void)setComment:(IGCommentModel *)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(IGCommentModel *)comment;
@end

