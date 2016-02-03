/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:12 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGCommentReshareHelperDelegate;
@class NSString, NSArray, NSSet;

@interface IGCommentReshareHelper : NSObject {

	char _allUsernamesAreLeading;
	char _userDeclinedSendingToDirect;
	char _containsOnlyAtSign;
	id<IGCommentReshareHelperDelegate> _delegate;
	NSString* _text;
	NSArray* _usernames;
	NSString* _textToSend;
	NSSet* _commentOnlyUsernames;

}

@property (assign,nonatomic,__weak) id<IGCommentReshareHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                                   //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) char userDeclinedSendingToDirect;                                //@synthesize userDeclinedSendingToDirect=_userDeclinedSendingToDirect - In the implementation block
@property (nonatomic,copy) NSArray * usernames;                                               //@synthesize usernames=_usernames - In the implementation block
@property (nonatomic,readonly) int status; 
@property (nonatomic,copy) NSString * textToSend;                                             //@synthesize textToSend=_textToSend - In the implementation block
@property (assign,nonatomic) char containsOnlyAtSign;                                         //@synthesize containsOnlyAtSign=_containsOnlyAtSign - In the implementation block
@property (nonatomic,copy) NSSet * commentOnlyUsernames;                                      //@synthesize commentOnlyUsernames=_commentOnlyUsernames - In the implementation block
+(id)recipientFromUsernames:(id)arg1 ;
+(id)usernamesFromText:(id)arg1 ;
+(id)textByTrimmingLeadingUsernames:(id)arg1 text:(id)arg2 allUsernamesAreLeading:(char*)arg3 ;
+(id)usernamesRegex;
-(NSArray *)usernames;
-(NSString *)textToSend;
-(void)setCommentOnlyUsernames:(NSSet *)arg1 ;
-(void)setContainsOnlyAtSign:(char)arg1 ;
-(void)setUsernames:(NSArray *)arg1 ;
-(void)setTextToSend:(NSString *)arg1 ;
-(void)notifyStatusChangeIfNeededFromOldStatus:(int)arg1 ;
-(NSSet *)commentOnlyUsernames;
-(char)userDeclinedSendingToDirect;
-(char)containsOnlyAtSign;
-(char)isAnyUsernameOnCommentOnlyList;
-(void)resharePost:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateCommentOnlylistUsernamesFromCommentModels:(id)arg1 ;
-(void)setUserDeclinedSendingToDirect:(char)arg1 ;
-(void)setDelegate:(id<IGCommentReshareHelperDelegate>)arg1 ;
-(id<IGCommentReshareHelperDelegate>)delegate;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(int)status;
@end
