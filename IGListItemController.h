

@class IGListAdapter;

@interface IGListItemController : NSObject {

	IGListAdapter* _listAdapter;

}

@property (nonatomic,__weak,readonly) IGListAdapter * listAdapter;              //@synthesize listAdapter=_listAdapter - In the implementation block
-(IGListAdapter *)listAdapter;
-(void)setListAdapter:(IGListAdapter *)arg1 ;
@end

