
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGTapButton, IGCircularProgressView, UILabel;

@interface IGAlbumUploadStatusView : UIView {

	int _status;
	IGTapButton* _retryButton;
	IGCircularProgressView* _progressView;
	UILabel* _statusLabel;

}

@property (nonatomic,retain) IGCircularProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                              //@synthesize statusLabel=_statusLabel - In the implementation block
@property (assign,nonatomic) int status;                                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) float progress; 
@property (nonatomic,readonly) IGTapButton * retryButton;                        //@synthesize retryButton=_retryButton - In the implementation block
-(IGTapButton *)retryButton;
-(void)updateForStatusChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(float)arg1 ;
-(void)setProgressView:(IGCircularProgressView *)arg1 ;
-(IGCircularProgressView *)progressView;
-(float)progress;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
@end

