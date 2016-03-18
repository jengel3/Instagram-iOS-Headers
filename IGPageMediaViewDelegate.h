

@protocol IGPageMediaViewDelegate <NSObject>
@optional
-(void)pageMediaView:(id)arg1 didScrollToPageIndex:(int)arg2;
-(void)pageMediaViewDidScroll:(id)arg1;
-(void)pageMediaView:(id)arg1 itemDidAppear:(id)arg2;
-(void)pageMediaView:(id)arg1 itemDidDisappear:(id)arg2;
-(void)pageMediaView:(id)arg1 itemDidStartViewing:(id)arg2;

@required
-(void)pageMediaViewWillDisplayOverlay:(id)arg1;
-(void)pageMediaViewDidSingleTap:(id)arg1 continueAction:(char)arg2;
-(void)pageMediaViewDidDoubleTap:(id)arg1;
-(void)pageMediaViewCurrentVideoCellDidLoadImage:(id)arg1;
-(void)pageMediaViewDidRequestVideoPlayback:(id)arg1;

@end

