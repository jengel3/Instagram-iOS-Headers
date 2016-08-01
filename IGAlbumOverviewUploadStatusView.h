
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGAlbumOverviewUploadStatusViewDelegate;
@class IGAlbumUploadStatusView, IGTapButton, IGCircularProgressView;

@interface IGAlbumOverviewUploadStatusView : UIView {

	int _status;
	id<IGAlbumOverviewUploadStatusViewDelegate> _delegate;
	IGAlbumUploadStatusView* _statusLabelView;
	IGTapButton* _retryButton;
	IGCircularProgressView* _progressView;

}

@property (nonatomic,readonly) IGAlbumUploadStatusView * statusLabelView;                              //@synthesize statusLabelView=_statusLabelView - In the implementation block
@property (nonatomic,readonly) IGTapButton * retryButton;                                              //@synthesize retryButton=_retryButton - In the implementation block
@property (nonatomic,readonly) IGCircularProgressView * progressView;                                  //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic) int status;                                                               //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) float progress; 
@property (assign,nonatomic,__weak) id<IGAlbumOverviewUploadStatusViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(IGTapButton *)retryButton;
-(void)onRetryTapped;
-(IGAlbumUploadStatusView *)statusLabelView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGAlbumOverviewUploadStatusViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGAlbumOverviewUploadStatusViewDelegate>)delegate;
-(void)setProgress:(float)arg1 ;
-(IGCircularProgressView *)progressView;
-(float)progress;
-(int)status;
-(void)setStatus:(int)arg1 ;
@end

