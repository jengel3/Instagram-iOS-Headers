

@interface IGFeedFocusCoordinator : NSObject {

	id _focusedItem;

}

@property (nonatomic,retain) id focusedItem;              //@synthesize focusedItem=_focusedItem - In the implementation block
-(id)initWithFocusedItem:(id)arg1 ;
-(void)setFocusedItem:(id)arg1 ;
-(id)focusedItem;
@end

