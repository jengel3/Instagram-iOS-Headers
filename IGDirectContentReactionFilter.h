

@protocol IGDirectContentReactionFilter <NSObject>
@property (assign,nonatomic) unsigned reactionType; 
@required
-(unsigned)reactionType;
-(void)setReactionType:(unsigned)arg1;
-(id)filteredReactionsFromReactions:(id)arg1;

@end

