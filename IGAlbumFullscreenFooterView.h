
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGAlbumFullscreenFooterViewDelegate;
@class IGAlbumViewersButton, IGTapButton, UIButton, IGAlbumUploadStatusView;

@interface IGAlbumFullscreenFooterView : UIView {

	int _uploadStatus;
	IGAlbumViewersButton* _viewersButton;
	IGTapButton* _moreOptionsButton;
	UIButton* _sendMessageButton;
	IGAlbumUploadStatusView* _uploadStatusView;
	id<IGAlbumFullscreenFooterViewDelegate> _delegate;

}

@property (nonatomic,readonly) IGAlbumViewersButton * viewersButton;                                 //@synthesize viewersButton=_viewersButton - In the implementation block
@property (nonatomic,readonly) IGTapButton * moreOptionsButton;                                      //@synthesize moreOptionsButton=_moreOptionsButton - In the implementation block
@property (nonatomic,readonly) UIButton * sendMessageButton;                                         //@synthesize sendMessageButton=_sendMessageButton - In the implementation block
@property (nonatomic,readonly) IGAlbumUploadStatusView * uploadStatusView;                           //@synthesize uploadStatusView=_uploadStatusView - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAlbumFullscreenFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * uploadRetryButton; 
@property (assign,nonatomic) int uploadStatus;                                                       //@synthesize uploadStatus=_uploadStatus - In the implementation block
@property (assign,nonatomic) float uploadProgress; 
-(void)moreOptionsTapped;
-(void)sendMessageTapped;
-(void)viewersTapped;
-(void)uploadRetryTapped;
-(IGAlbumViewersButton *)viewersButton;
-(IGAlbumUploadStatusView *)uploadStatusView;
-(UIButton *)sendMessageButton;
-(IGTapButton *)moreOptionsButton;
-(void)configureWithItem:(id)arg1 isCurrentUserItem:(char)arg2 canReply:(char)arg3 delegate:(id)arg4 ;
-(UIButton *)uploadRetryButton;
-(void)setUploadStatus:(int)arg1 ;
-(void)setUploadProgress:(float)arg1 ;
-(float)uploadProgress;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGAlbumFullscreenFooterViewDelegate>)delegate;
-(int)uploadStatus;
@end

