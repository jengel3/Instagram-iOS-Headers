
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGAlbumFullscreenFooterViewDelegate;
@class IGAlbumUploadStatusView, IGTapButton, IGAlbumViewersButton;

@interface IGAlbumFullscreenFooterView : UIView {

	IGAlbumUploadStatusView* _uploadStatusView;
	IGTapButton* _sendMessageButton;
	IGAlbumViewersButton* _viewersButton;
	IGTapButton* _moreOptionsButton;
	id<IGAlbumFullscreenFooterViewDelegate> _delegate;

}

@property (nonatomic,readonly) IGTapButton * sendMessageButton;                                      //@synthesize sendMessageButton=_sendMessageButton - In the implementation block
@property (nonatomic,readonly) IGAlbumViewersButton * viewersButton;                                 //@synthesize viewersButton=_viewersButton - In the implementation block
@property (nonatomic,readonly) IGTapButton * moreOptionsButton;                                      //@synthesize moreOptionsButton=_moreOptionsButton - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAlbumFullscreenFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGAlbumUploadStatusView * uploadStatusView;                           //@synthesize uploadStatusView=_uploadStatusView - In the implementation block
-(void)moreOptionsTapped;
-(void)sendMessageTapped;
-(void)viewersTapped;
-(void)uploadRetryTapped;
-(IGAlbumViewersButton *)viewersButton;
-(IGAlbumUploadStatusView *)uploadStatusView;
-(IGTapButton *)sendMessageButton;
-(IGTapButton *)moreOptionsButton;
-(void)configureWithItem:(id)arg1 userSession:(id)arg2 delegate:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGAlbumFullscreenFooterViewDelegate>)delegate;
@end

