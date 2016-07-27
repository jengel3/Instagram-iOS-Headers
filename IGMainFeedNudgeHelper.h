
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedScrollViewDelegate.h>

@class IGListAdapter, NSString;

@interface IGMainFeedNudgeHelper : NSObject <IGFeedScrollViewDelegate> {

	IGListAdapter* _listAdapter;

}

@property (nonatomic,readonly) IGListAdapter * listAdapter;              //@synthesize listAdapter=_listAdapter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGListAdapter *)listAdapter;
-(id)initWithListAdapter:(id)arg1 ;
-(char)nudgeToOffset:(CGPoint)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(char)scrollViewShouldScrollToTop:(id)arg1 ;
@end

