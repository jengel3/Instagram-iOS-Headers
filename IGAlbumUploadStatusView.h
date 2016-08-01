
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGTapButton, IGCircularProgressView, UILabel;

@interface IGAlbumUploadStatusView : UIView {

	char _forceHideProgressView;
	int _status;
	IGTapButton* _retryButton;
	IGCircularProgressView* _progressView;
	UILabel* _statusLabel;

}

@property (nonatomic,retain) IGCircularProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                              //@synthesize statusLabel=_statusLabel - In the implementation block
@property (assign,nonatomic) int status;                                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) float progress; 
@property (assign,nonatomic) char forceHideProgressView;                         //@synthesize forceHideProgressView=_forceHideProgressView - In the implementation block
@property (nonatomic,readonly) IGTapButton * retryButton;                        //@synthesize retryButton=_retryButton - In the implementation block
-(IGTapButton *)retryButton;
-(char)forceHideProgressView;
-(void)setForceHideProgressView:(char)arg1 ;
-(void)updateForStatusChange;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)setProgressView:(IGCircularProgressView *)arg1 ;
-(IGCircularProgressView *)progressView;
-(float)progress;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
@end

