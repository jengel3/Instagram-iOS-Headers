
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGAdRatingWebViewCellContinuationDelegate.h>

@interface IGAdRatingFeedViewController : IGFeedViewController_DEPRECATED <IGAdRatingWebViewCellContinuationDelegate>
-(id)analyticsModule;
-(char)feedViewLayout:(id)arg1 shouldHideHeaderForSection:(unsigned)arg2 withObjects:(id)arg3 ;
-(id)collectionViewController:(id)arg1 viewForSupplementaryViewOfKind:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)collectionViewController:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(char)webViewCell:(id)arg1 shouldStartLoadWithURL:(id)arg2 ;
-(void)addFooterView:(id)arg1 withRank:(int)arg2 animated:(char)arg3 ;
-(char)useNewVisibilityTracking;
-(id)init;
@end

