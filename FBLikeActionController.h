/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:53 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSDiscardableContent.h>

@class FBSession, NSString;

@interface FBLikeActionController : NSObject <NSCoding, NSDiscardableContent> {

	unsigned _contentAccessCount;
	FBSession* _session;
	unsigned _state;
	char _objectIsLiked;
	char _contentDiscarded;
	char _objectIsPage;
	NSString* _objectID;
	unsigned _likeCountWithLike;
	unsigned _likeCountWithoutLike;
	NSString* _socialSentenceWithLike;
	NSString* _socialSentenceWithoutLike;
	NSString* _unlikeToken;
	NSString* _verifiedObjectID;

}

@property (nonatomic,readonly) unsigned likeCount; 
@property (nonatomic,copy,readonly) NSString * objectID;                                   //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) char objectIsLiked;                                           //@synthesize objectIsLiked=_objectIsLiked - In the implementation block
@property (nonatomic,copy,readonly) NSString * socialSentence; 
@property (assign,getter=isContentDiscarded,nonatomic) char contentDiscarded;              //@synthesize contentDiscarded=_contentDiscarded - In the implementation block
@property (assign,nonatomic) unsigned likeCountWithLike;                                   //@synthesize likeCountWithLike=_likeCountWithLike - In the implementation block
@property (assign,nonatomic) unsigned likeCountWithoutLike;                                //@synthesize likeCountWithoutLike=_likeCountWithoutLike - In the implementation block
@property (assign,nonatomic) char objectIsPage;                                            //@synthesize objectIsPage=_objectIsPage - In the implementation block
@property (nonatomic,copy) NSString * socialSentenceWithLike;                              //@synthesize socialSentenceWithLike=_socialSentenceWithLike - In the implementation block
@property (nonatomic,copy) NSString * socialSentenceWithoutLike;                           //@synthesize socialSentenceWithoutLike=_socialSentenceWithoutLike - In the implementation block
@property (nonatomic,copy) NSString * unlikeToken;                                         //@synthesize unlikeToken=_unlikeToken - In the implementation block
@property (nonatomic,copy) NSString * verifiedObjectID;                                    //@synthesize verifiedObjectID=_verifiedObjectID - In the implementation block
+(id)likeActionControllerForObjectID:(id)arg1 ;
+(char)isDisabled;
-(id)initWithObjectID:(id)arg1 session:(id)arg2 ;
-(void)_refreshWithMode:(unsigned)arg1 ;
-(char)objectIsLiked;
-(unsigned)likeCountWithLike;
-(unsigned)likeCountWithoutLike;
-(NSString *)socialSentenceWithLike;
-(NSString *)socialSentenceWithoutLike;
-(void)_setExecuting:(char)arg1 forKey:(id)arg2 ;
-(char)_useOGLike;
-(void)_updateWithObjectIsLiked:(char)arg1 likeCountWithLike:(unsigned)arg2 likeCountWithoutLike:(unsigned)arg3 socialSentenceWithLike:(id)arg4 socialSentenceWithoutLike:(id)arg5 unlikeToken:(id)arg6 soundEnabled:(char)arg7 animated:(char)arg8 deferred:(char)arg9 ;
-(NSString *)unlikeToken;
-(void)_publishUnlikeWithUpdateBlock:(/*^block*/id)arg1 analyticsParameters:(id)arg2 ;
-(void)_presentLikeDialogWithUpdateBlock:(/*^block*/id)arg1 analyticsParameters:(id)arg2 ;
-(void)_publishLikeWithUpdateBlock:(/*^block*/id)arg1 analyticsParameters:(id)arg2 ;
-(void)setContentDiscarded:(char)arg1 ;
-(NSString *)verifiedObjectID;
-(void)setVerifiedObjectID:(NSString *)arg1 ;
-(void)setObjectIsPage:(char)arg1 ;
-(NSString *)socialSentence;
-(id)_ensureVerifiedObjectIDWithConnection:(id)arg1 ;
-(void)setObjectIsLiked:(char)arg1 ;
-(void)setLikeCountWithLike:(unsigned)arg1 ;
-(void)setLikeCountWithoutLike:(unsigned)arg1 ;
-(void)setSocialSentenceWithLike:(NSString *)arg1 ;
-(void)setSocialSentenceWithoutLike:(NSString *)arg1 ;
-(void)setUnlikeToken:(NSString *)arg1 ;
-(void)_serialize;
-(char)objectIsPage;
-(void)toggleLikeWithSoundEnabled:(char)arg1 analyticsParameters:(id)arg2 ;
-(unsigned)likeCount;
-(NSString *)objectID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(char)isContentDiscarded;
-(void)refresh;
@end

