
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTimelineHeader.h>

@protocol IGFeedItemLoggingProviderDelegate, IGFeedItemAppHeaderDelegate, IGSponsorableButton;
@class IGFeedItem, UIButton, IGAppIconImageView, IGStringStyle;

@interface IGFeedItemAppHeader : IGTimelineHeader {

	IGFeedItem* _feedItem;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	id<IGFeedItemAppHeaderDelegate> _delegate;
	int _accessoryViewType;
	UIButton*<IGSponsorableButton> _sponsoredPostButton;
	UIButton* _customizableButton;
	UIButton* _titleButton;
	IGAppIconImageView* _imageView;
	IGStringStyle* _boldGrayStyle;
	IGStringStyle* _boldLinkStyle;
	UIButton* _imageButton;

}

@property (nonatomic,retain) UIButton*<IGSponsorableButton> sponsoredPostButton;                        //@synthesize sponsoredPostButton=_sponsoredPostButton - In the implementation block
@property (nonatomic,retain) UIButton * customizableButton;                                             //@synthesize customizableButton=_customizableButton - In the implementation block
@property (nonatomic,retain) UIButton * titleButton;                                                    //@synthesize titleButton=_titleButton - In the implementation block
@property (nonatomic,retain) IGAppIconImageView * imageView;                                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) IGStringStyle * boldGrayStyle;                                             //@synthesize boldGrayStyle=_boldGrayStyle - In the implementation block
@property (nonatomic,retain) IGStringStyle * boldLinkStyle;                                             //@synthesize boldLinkStyle=_boldLinkStyle - In the implementation block
@property (nonatomic,retain) UIButton * imageButton;                                                    //@synthesize imageButton=_imageButton - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                                     //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemAppHeaderDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int accessoryViewType;                                                     //@synthesize accessoryViewType=_accessoryViewType - In the implementation block
-(IGFeedItem *)feedItem;
-(void)setLoggingDelegate:(id<IGFeedItemLoggingProviderDelegate>)arg1 ;
-(void)setAccessoryViewType:(int)arg1 ;
-(UIButton *)customizableButton;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(void)onTitleButtonTapped:(id)arg1 ;
-(void)onImageTapped:(id)arg1 ;
-(int)accessoryViewType;
-(UIButton*<IGSponsorableButton>)sponsoredPostButton;
-(IGStringStyle *)boldLinkStyle;
-(void)onCustomizableButtonPressed:(id)arg1 ;
-(IGStringStyle *)boldGrayStyle;
-(void)setCustomizableButton:(UIButton *)arg1 ;
-(void)setSponsoredPostButton:(UIButton*<IGSponsorableButton>)arg1 ;
-(void)setBoldLinkStyle:(IGStringStyle *)arg1 ;
-(void)setBoldGrayStyle:(IGStringStyle *)arg1 ;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(UIButton *)imageButton;
-(void)setImageButton:(UIButton *)arg1 ;
-(void)setTitleButton:(UIButton *)arg1 ;
-(UIButton *)titleButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemAppHeaderDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedItemAppHeaderDelegate>)delegate;
-(IGAppIconImageView *)imageView;
-(void)setImageView:(IGAppIconImageView *)arg1 ;
@end

