
@class NSArray;


@protocol IGDirectContentReactable <NSObject>
@property (nonatomic,retain) NSArray * reactions; 
@property (assign,nonatomic) unsigned likeCount; 
@property (assign,nonatomic) char reactionsNeedsReRender; 
@property (assign,nonatomic) unsigned lastReactionType; 
@required
-(NSArray *)reactions;
-(id)copyOfContentWithReactionFilter:(id)arg1;
-(void)setReactions:(id)arg1;
-(char)reactionsNeedsReRender;
-(void)setReactionsNeedsReRender:(char)arg1;
-(unsigned)lastReactionType;
-(void)setLastReactionType:(unsigned)arg1;
-(unsigned)likeCount;
-(void)setLikeCount:(unsigned)arg1;

@end

