

@protocol IGEventAggregatorDelegate <NSObject>
@required
-(void)eventAggregatorForEvent:(id)arg1 addExtraEventInfoTo:(id)arg2;
-(void)eventAggregatorDidProduceEvent:(id)arg1 module:(id)arg2 data:(id)arg3;

@end

