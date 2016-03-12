
#import <Instagram/IGDirectContentReactionFilter.h>

@class IGUser, NSString;

@interface IGDirectContentReactionLikeFilter : NSObject <IGDirectContentReactionFilter> {

	char _like;
	unsigned _reactionType;
	IGUser* _user;

}

@property (assign,nonatomic) char like;                             //@synthesize like=_like - In the implementation block
@property (nonatomic,retain) IGUser * user;                         //@synthesize user=_user - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned reactionType;                 //@synthesize reactionType=_reactionType - In the implementation block
-(unsigned)reactionType;
-(void)setReactionType:(unsigned)arg1 ;
-(char)like;
-(id)filteredReactionsFromReactions:(id)arg1 ;
-(id)initWithUser:(id)arg1 withLike:(char)arg2 ;
-(void)setLike:(char)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
@end

