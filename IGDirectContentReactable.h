
@class NSArray;


@protocol IGDirectContentReactable <NSObject>
@property (nonatomic,retain) NSArray * reactions; 
@property (assign,nonatomic) unsigned likeCount; 
@property (assign,nonatomic) char reactionsNeedsReRender; 
@property (assign,nonatomic) unsigned lastReactionType; 
@required
-(NSArray *)reactions;
-(void)setReactions:(id)arg1;
-(void)setReactionsNeedsReRender:(char)arg1;
-(void)setLastReactionType:(unsigned)arg1;
-(id)copyOfContentWithReactionFilter:(id)arg1;
-(char)reactionsNeedsReRender;
-(unsigned)lastReactionType;
-(unsigned)likeCount;
-(void)setLikeCount:(unsigned)arg1;

@end

