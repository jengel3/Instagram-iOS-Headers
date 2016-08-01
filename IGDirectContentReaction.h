
#import <libobjc.A.dylib/NSCoding.h>

@class IGDate, IGUser;

@interface IGDirectContentReaction : NSObject <NSCoding> {

	unsigned _reactionType;
	IGDate* _timestamp;
	IGUser* _sender;

}

@property (assign,nonatomic) unsigned reactionType;              //@synthesize reactionType=_reactionType - In the implementation block
@property (nonatomic,retain) IGDate * timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) IGUser * sender;                    //@synthesize sender=_sender - In the implementation block
+(id)likeForUserAtCurrentTime:(id)arg1 ;
+(id)reactionsFromDictionary:(id)arg1 ;
+(unsigned)likeCountFromDictionary:(id)arg1 ;
-(id)initWithReactionType:(unsigned)arg1 timeStamp:(id)arg2 sender:(id)arg3 ;
-(id)initWithDictionary:(id)arg1 andType:(unsigned)arg2 ;
-(unsigned)reactionTypeForString:(id)arg1 ;
-(void)setReactionType:(unsigned)arg1 ;
-(unsigned)reactionType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(IGDate *)timestamp;
-(void)setTimestamp:(IGDate *)arg1 ;
-(IGUser *)sender;
-(void)setSender:(IGUser *)arg1 ;
@end

