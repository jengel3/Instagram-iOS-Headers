
#import <UIKit/UIView.h>

@protocol IGFeedStatusViewDataSource, IGFeedStatusViewDynamicHeightProtocol;
@class NSObject, IGTableViewInsetInfoView;

@interface IGFeedStatusView : UIView {

	char _canHideSelf;
	char _shouldOnlyShowForLoadingMore;
	NSObject*<IGFeedStatusViewDataSource> _dataSource;
	NSObject*<IGFeedStatusViewDynamicHeightProtocol> _delegate;
	IGTableViewInsetInfoView* _infoView;

}

@property (assign,nonatomic) char canHideSelf;                                                              //@synthesize canHideSelf=_canHideSelf - In the implementation block
@property (assign,nonatomic) char shouldOnlyShowForLoadingMore;                                             //@synthesize shouldOnlyShowForLoadingMore=_shouldOnlyShowForLoadingMore - In the implementation block
@property (nonatomic,retain) NSObject*<IGFeedStatusViewDataSource> dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<IGFeedStatusViewDynamicHeightProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGTableViewInsetInfoView * infoView;                                           //@synthesize infoView=_infoView - In the implementation block
-(void)setShouldOnlyShowForLoadingMore:(char)arg1 ;
-(void)updateFeedStatusView;
-(void)setCanHideSelf:(char)arg1 ;
-(void)updateForFeedStatusChange;
-(char)shouldOnlyShowForLoadingMore;
-(char)canHideSelf;
-(IGTableViewInsetInfoView *)infoView;
-(void)setInfoView:(IGTableViewInsetInfoView *)arg1 ;
-(void)setDataSource:(NSObject*<IGFeedStatusViewDataSource>)arg1 ;
-(void)setDelegate:(NSObject*<IGFeedStatusViewDynamicHeightProtocol>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<IGFeedStatusViewDataSource>)dataSource;
-(NSObject*<IGFeedStatusViewDynamicHeightProtocol>)delegate;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
@end

