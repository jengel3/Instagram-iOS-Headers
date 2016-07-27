
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGSlidingCollectionViewCell.h>
#import <Instagram/IGDirectCellProtocol.h>

@protocol IGDirectContentCellDelegate, IGDirectContentCellTextLinkDelegate, IGDirectContentCellDecorator;
@class UIView, IGDirectContent, UIImageView, IGProfilePictureImageView, UILabel, UILongPressGestureRecognizer, NSString;

@interface IGDirectContentCell : UICollectionViewCell <IGProfilePictureImageViewDelegate, UIGestureRecognizerDelegate, IGSlidingCollectionViewCell, IGDirectCellProtocol> {

	char _isSameUserContent;
	char _hideProfilePicture;
	char _showUsername;
	char _pendingDeleteAction;
	float _slideAmount;
	UIView* _contentContainerView;
	id<IGDirectContentCellDelegate> _delegate;
	id<IGDirectContentCellTextLinkDelegate> _textDelegate;
	IGDirectContent* _content;
	id<IGDirectContentCellDecorator> _cellDecorator;
	UIImageView* _backgroundBubbleView;
	IGProfilePictureImageView* _profilePictureImageView;
	UILabel* _timestampLabel;
	UILabel* _senderUsernameLabel;
	UILongPressGestureRecognizer* _contentMenuLongPressRecognizer;

}

@property (nonatomic,retain) IGProfilePictureImageView * profilePictureImageView;                        //@synthesize profilePictureImageView=_profilePictureImageView - In the implementation block
@property (nonatomic,retain) UILabel * timestampLabel;                                                   //@synthesize timestampLabel=_timestampLabel - In the implementation block
@property (nonatomic,retain) UILabel * senderUsernameLabel;                                              //@synthesize senderUsernameLabel=_senderUsernameLabel - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * contentMenuLongPressRecognizer;              //@synthesize contentMenuLongPressRecognizer=_contentMenuLongPressRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectContentCellDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectContentCellTextLinkDelegate> textDelegate;                //@synthesize textDelegate=_textDelegate - In the implementation block
@property (nonatomic,retain) IGDirectContent * content;                                                  //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) char isSameUserContent;                                                     //@synthesize isSameUserContent=_isSameUserContent - In the implementation block
@property (assign,nonatomic) char hideProfilePicture;                                                    //@synthesize hideProfilePicture=_hideProfilePicture - In the implementation block
@property (nonatomic,retain) id<IGDirectContentCellDecorator> cellDecorator;                             //@synthesize cellDecorator=_cellDecorator - In the implementation block
@property (nonatomic,readonly) CGRect bubbleFrame; 
@property (assign,nonatomic) char showUsername;                                                          //@synthesize showUsername=_showUsername - In the implementation block
@property (nonatomic,readonly) float cellContentYOffset; 
@property (assign,nonatomic) char pendingDeleteAction;                                                   //@synthesize pendingDeleteAction=_pendingDeleteAction - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundBubbleView;                                         //@synthesize backgroundBubbleView=_backgroundBubbleView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float slideAmount;                                                          //@synthesize slideAmount=_slideAmount - In the implementation block
@property (nonatomic,readonly) float maxSlideAmount; 
@property (nonatomic,readonly) UIView * contentContainerView;                                            //@synthesize contentContainerView=_contentContainerView - In the implementation block
+(float)profilePictureWidthOffset;
-(void)setPendingDeleteAction:(char)arg1 ;
-(UILabel *)timestampLabel;
-(id)timestampText;
-(UIImageView *)backgroundBubbleView;
-(UILabel *)senderUsernameLabel;
-(void)onContentMenuPress:(id)arg1 ;
-(void)setContentMenuLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)contentMenuLongPressRecognizer;
-(void)setSlideAmount:(float)arg1 ;
-(void)setShowUsername:(char)arg1 ;
-(id<IGDirectContentCellDecorator>)cellDecorator;
-(char)showUsername;
-(float)slideAmount;
-(float)profilePictureYOffset;
-(float)maxSlideAmount;
-(float)usernameXOffset;
-(id)backgroundImageIsForCurrentUser:(char)arg1 ;
-(void)setProfilePictureAlpha:(float)arg1 ;
-(void)setHideProfilePicture:(char)arg1 ;
-(void)setCellDecorator:(id<IGDirectContentCellDecorator>)arg1 ;
-(void)setProfilePictureY:(float)arg1 ;
-(void)setHidesBubbleBackground:(char)arg1 ;
-(void)setIsSameUserContent:(char)arg1 ;
-(char)hideProfilePicture;
-(char)pendingDeleteAction;
-(void)setBackgroundBubbleView:(UIImageView *)arg1 ;
-(void)setTimestampLabel:(UILabel *)arg1 ;
-(void)setSenderUsernameLabel:(UILabel *)arg1 ;
-(CGRect)bubbleFrame;
-(char)isSameUserContent;
-(float)cellContentYOffset;
-(void)setBackgroundBubbleWithFrame:(CGRect)arg1 forCurrentUser:(char)arg2 ;
-(CGRect)tapTargetFrame;
-(IGProfilePictureImageView *)profilePictureImageView;
-(void)setProfilePictureImageView:(IGProfilePictureImageView *)arg1 ;
-(void)profilePictureTapped:(id)arg1 ;
-(void)setTextDelegate:(id<IGDirectContentCellTextLinkDelegate>)arg1 ;
-(id<IGDirectContentCellTextLinkDelegate>)textDelegate;
-(UIView *)contentContainerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDirectContentCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectContentCellDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)prepareForReuse;
-(IGDirectContent *)content;
-(void)setContent:(IGDirectContent *)arg1 ;
@end

