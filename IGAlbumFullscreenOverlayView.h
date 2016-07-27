
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGAlbumFullscreenProgressView, IGAlbumFullscreenHeaderView, IGAlbumFullscreenFooterView, IGGradientView;

@interface IGAlbumFullscreenOverlayView : UIView {

	IGAlbumFullscreenProgressView* _progressView;
	IGAlbumFullscreenHeaderView* _headerView;
	IGAlbumFullscreenFooterView* _footerView;
	IGGradientView* _backTapGradientView;
	IGGradientView* _topGradientView;
	IGGradientView* _bottomGradientView;

}

@property (nonatomic,readonly) IGGradientView * topGradientView;                          //@synthesize topGradientView=_topGradientView - In the implementation block
@property (nonatomic,readonly) IGGradientView * bottomGradientView;                       //@synthesize bottomGradientView=_bottomGradientView - In the implementation block
@property (nonatomic,readonly) IGAlbumFullscreenProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) IGAlbumFullscreenHeaderView * headerView;                  //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) IGAlbumFullscreenFooterView * footerView;                  //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,readonly) IGGradientView * backTapGradientView;                      //@synthesize backTapGradientView=_backTapGradientView - In the implementation block
-(IGGradientView *)backTapGradientView;
-(IGGradientView *)topGradientView;
-(IGGradientView *)bottomGradientView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGAlbumFullscreenHeaderView *)headerView;
-(IGAlbumFullscreenProgressView *)progressView;
-(IGAlbumFullscreenFooterView *)footerView;
@end

