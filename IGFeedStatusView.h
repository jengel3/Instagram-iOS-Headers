
#import <UIKit/UIView.h>
#import <Instagram/IGTableViewInsetInfoViewDelegate.h>

@protocol IGFeedStatusViewDataSource, IGFeedStatusViewDelegate;
@class NSObject, IGTableViewInsetInfoView;

@interface IGFeedStatusView : UIView <IGTableViewInsetInfoViewDelegate> {

	char _canHideSelf;
	char _shouldOnlyShowForLoadingMore;
	NSObject*<IGFeedStatusViewDataSource> _dataSource;
	NSObject*<IGFeedStatusViewDelegate> _delegate;
	IGTableViewInsetInfoView* _infoView;

}

@property (nonatomic,retain) IGTableViewInsetInfoView * infoView;                              //@synthesize infoView=_infoView - In the implementation block
@property (assign,nonatomic) char canHideSelf;                                                 //@synthesize canHideSelf=_canHideSelf - In the implementation block
@property (assign,nonatomic) char shouldOnlyShowForLoadingMore;                                //@synthesize shouldOnlyShowForLoadingMore=_shouldOnlyShowForLoadingMore - In the implementation block
@property (nonatomic,retain) NSObject*<IGFeedStatusViewDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<IGFeedStatusViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setShouldOnlyShowForLoadingMore:(char)arg1 ;
-(void)setCanHideSelf:(char)arg1 ;
-(void)updateFeedStatusView;
-(void)updateForFeedStatusChange;
-(char)shouldOnlyShowForLoadingMore;
-(char)canHideSelf;
-(void)tableViewInsetInfoViewDidTapOnView:(id)arg1 ;
-(IGTableViewInsetInfoView *)infoView;
-(void)setInfoView:(IGTableViewInsetInfoView *)arg1 ;
-(void)setDataSource:(NSObject*<IGFeedStatusViewDataSource>)arg1 ;
-(void)setDelegate:(NSObject*<IGFeedStatusViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<IGFeedStatusViewDataSource>)dataSource;
-(NSObject*<IGFeedStatusViewDelegate>)delegate;
@end

