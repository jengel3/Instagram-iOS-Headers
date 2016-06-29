
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGCTAPresentationViewType.h>

@protocol IGProfileCTAV2ViewDelegate;
@class UIButton, UILabel, IGFeedPhotoView, NSString;

@interface IGProfileCTAV2View : UIView <IGCTAPresentationViewType> {

	id<IGProfileCTAV2ViewDelegate> _delegate;
	UIButton* _dismissButton;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _directResponseHandlerButton;
	IGFeedPhotoView* _ctaImageView;

}

@property (nonatomic,__weak,readonly) id<IGProfileCTAV2ViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                                    //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                     //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * directResponseHandlerButton;                      //@synthesize directResponseHandlerButton=_directResponseHandlerButton - In the implementation block
@property (nonatomic,readonly) IGFeedPhotoView * ctaImageView;                              //@synthesize ctaImageView=_ctaImageView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)allowedPresentationLifeCycleTime;
-(void)setupDirectResponseHandlerButton;
-(void)setupDismissButton;
-(void)setupLabelsWithText:(id)arg1 overlaySubTitle:(id)arg2 ;
-(void)setupImageViewWithImageURL:(id)arg1 ;
-(void)directResponseHandlerButtonTapped:(id)arg1 ;
-(IGFeedPhotoView *)ctaImageView;
-(int)preferredPresentationPosition;
-(id)initWithLabelText:(id)arg1 overlaySubTitle:(id)arg2 imageURL:(id)arg3 delegate:(id)arg4 ;
-(UIButton *)directResponseHandlerButton;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGProfileCTAV2ViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(UIButton *)dismissButton;
-(void)dismissButtonTapped:(id)arg1 ;
@end

