

@protocol IGEventAggregatorDelegate;
@interface IGEventAggregator : NSObject {

	id<IGEventAggregatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGEventAggregatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)save;
-(void)setDelegate:(id<IGEventAggregatorDelegate>)arg1 ;
-(id<IGEventAggregatorDelegate>)delegate;
-(void)reset;
-(id)initWithDelegate:(id)arg1 ;
@end

