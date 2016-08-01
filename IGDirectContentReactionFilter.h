

@protocol IGDirectContentReactionFilter <NSObject>
@property (assign,nonatomic) unsigned reactionType; 
@required
-(void)setReactionType:(unsigned)arg1;
-(id)filteredReactionsFromReactions:(id)arg1;
-(unsigned)reactionType;

@end

