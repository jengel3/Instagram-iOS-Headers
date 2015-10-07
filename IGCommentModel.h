/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:02 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/NSCoding.h>

@class IGPost, IGUser, NSString, IGDate;

@interface IGCommentModel : NSObject <NSCoding> {

	char _wasMarkedAsSpam;
	char _didReportAsSpam;
	IGPost* _post;
	IGUser* _user;
	NSString* _pk;
	NSString* _text;
	int _type;
	IGDate* _createdAt;
	int _postedState;
	NSString* _idempotenceToken;

}

@property (assign,nonatomic,__weak) IGPost * post;                     //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) IGUser * user;                            //@synthesize user=_user - In the implementation block
@property (nonatomic,copy) NSString * pk;                              //@synthesize pk=_pk - In the implementation block
@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) IGDate * createdAt;                       //@synthesize createdAt=_createdAt - In the implementation block
@property (assign,nonatomic) int postedState;                          //@synthesize postedState=_postedState - In the implementation block
@property (assign,nonatomic) char wasMarkedAsSpam;                     //@synthesize wasMarkedAsSpam=_wasMarkedAsSpam - In the implementation block
@property (assign,nonatomic) char didReportAsSpam;                     //@synthesize didReportAsSpam=_didReportAsSpam - In the implementation block
@property (nonatomic,readonly) char canDelete; 
@property (nonatomic,retain) NSString * idempotenceToken;              //@synthesize idempotenceToken=_idempotenceToken - In the implementation block
+(id)postCommentWithText:(id)arg1 forPost:(id)arg2 ;
+(id)defaultTruncationTokenString;
+(id)moreTruncationTokenString;
-(NSString *)pk;
-(void)reportInappropriateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPostedState:(int)arg1 ;
-(id)buildStyledStringWithNewline:(char)arg1 ;
-(int)postedState;
-(id)initWithText:(id)arg1 post:(id)arg2 user:(id)arg3 ;
-(void)postComment;
-(void)setPk:(NSString *)arg1 ;
-(NSString *)idempotenceToken;
-(void)forceRemoveAndReportWithReason:(int)arg1 ;
-(void)onCommentDeleted;
-(void)setDidReportAsSpam:(char)arg1 ;
-(void)removeAndReportWithReason:(int)arg1 ;
-(void)reportWithReason:(int)arg1 ;
-(char)wasMarkedAsSpam;
-(void)setWasMarkedAsSpam:(char)arg1 ;
-(char)didReportAsSpam;
-(void)setIdempotenceToken:(NSString *)arg1 ;
-(id)buildStyledStringWithNewline:(char)arg1 width:(float)arg2 numberOfLines:(int)arg3 truncationToken:(id)arg4 ;
-(id)stringWithCollapsedEmptyLines:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(char)canDelete;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)setCreatedAt:(IGDate *)arg1 ;
-(IGDate *)createdAt;
-(IGPost *)post;
-(void)setPost:(IGPost *)arg1 ;
@end

