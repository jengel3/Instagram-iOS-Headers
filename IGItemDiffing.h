

@protocol IGItemDiffingDelegate;
@class NSSet;

@interface IGItemDiffing : NSObject {

	NSSet* _currentItems;
	id<IGItemDiffingDelegate> _delegate;

}

@property (nonatomic,retain) NSSet * currentItems;                                     //@synthesize currentItems=_currentItems - In the implementation block
@property (nonatomic,__weak,readonly) id<IGItemDiffingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updateCurrentItemWithSet:(id)arg1 ;
-(NSSet *)currentItems;
-(id<IGItemDiffingDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setCurrentItems:(NSSet *)arg1 ;
@end

