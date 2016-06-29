

@protocol IGPageMediaViewDelegate <NSObject>
@required
-(void)pageMediaViewWillDisplayOverlay:(id)arg1;
-(void)pageMediaViewDidInitialSingleTap:(id)arg1;
-(void)pageMediaViewDidSingleTap:(id)arg1 continueAction:(char)arg2;
-(void)pageMediaViewDidDoubleTap:(id)arg1;
-(void)pageMediaViewCurrentVideoCellDidLoadImage:(id)arg1;
-(void)pageMediaView:(id)arg1 didToggleVideoAudio:(char)arg2;
-(void)pageMediaView:(id)arg1 willScrollToPageIndex:(int)arg2 fromIndex:(int)arg3;
-(void)pageMediaView:(id)arg1 didScrollToPageIndex:(int)arg2 fromIndex:(int)arg3;
-(void)pageMediaViewDidScroll:(id)arg1;
-(void)pageMediaView:(id)arg1 itemDidAppear:(id)arg2;
-(void)pageMediaView:(id)arg1 itemDidDisappear:(id)arg2;
-(void)pageMediaView:(id)arg1 itemDidStartViewing:(id)arg2;

@end

