
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <Instagram/IGAutocompleteControllerTextInput.h>

@protocol IGCaptionCellDelegate;
@class UIImageView, IGProfilePictureImageView, IGSimpleFrameButton, UITextView, UIView, IGTapButton, IGGradientView, NSString;

@interface IGCaptionCell : UICollectionViewCell <UITextViewDelegate, IGAutocompleteControllerTextInput> {

	char _shouldShowProfileInCaption;
	UIImageView* _thumbnailView;
	id<IGCaptionCellDelegate> _delegate;
	IGProfilePictureImageView* _profilePictureImageView;
	IGSimpleFrameButton* _photoFrameView;
	UITextView* _textView;
	UIView* _bottomLine;
	IGTapButton* _editButton;
	IGGradientView* _topGradientView;
	IGGradientView* _bottomGradientView;
	float _offsetY;

}

@property (nonatomic,retain) IGProfilePictureImageView * profilePictureImageView;              //@synthesize profilePictureImageView=_profilePictureImageView - In the implementation block
@property (nonatomic,retain) UIImageView * thumbnailView;                                      //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,retain) IGSimpleFrameButton * photoFrameView;                             //@synthesize photoFrameView=_photoFrameView - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                            //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIView * bottomLine;                                              //@synthesize bottomLine=_bottomLine - In the implementation block
@property (nonatomic,readonly) IGTapButton * editButton;                                       //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) IGGradientView * topGradientView;                                 //@synthesize topGradientView=_topGradientView - In the implementation block
@property (nonatomic,retain) IGGradientView * bottomGradientView;                              //@synthesize bottomGradientView=_bottomGradientView - In the implementation block
@property (assign,nonatomic) char shouldShowProfileInCaption;                                  //@synthesize shouldShowProfileInCaption=_shouldShowProfileInCaption - In the implementation block
@property (assign,nonatomic) float offsetY;                                                    //@synthesize offsetY=_offsetY - In the implementation block
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic,__weak) id<IGCaptionCellDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
+(char)smallerPhotoEnabled;
+(float)captionPhotoWidth;
+(float)heightWithShowsEditButton:(char)arg1 ;
-(IGGradientView *)topGradientView;
-(IGGradientView *)bottomGradientView;
-(IGProfilePictureImageView *)profilePictureImageView;
-(void)setProfilePictureImageView:(IGProfilePictureImageView *)arg1 ;
-(void)setShouldShowProfileInCaption:(char)arg1 ;
-(id)captionFont;
-(id)captionPlaceholderText;
-(void)didTapEdit;
-(char)biggerFontEnabled;
-(char)shouldShowProfileInCaption;
-(char)shouldUseNewCaptionCopy;
-(char)shouldNotShowCaptionPlaceholder;
-(CGRect)textViewRectWithPhotoFrame:(CGRect)arg1 ;
-(CGRect)photoFrameRectForAspectRatio:(float)arg1 ;
-(CGRect)profilePictureRect;
-(void)onMediaTap;
-(IGSimpleFrameButton *)photoFrameView;
-(UIView *)bottomLine;
-(void)setPhotoFrameView:(IGSimpleFrameButton *)arg1 ;
-(void)setBottomLine:(UIView *)arg1 ;
-(void)setTopGradientView:(IGGradientView *)arg1 ;
-(void)setBottomGradientView:(IGGradientView *)arg1 ;
-(void)setMediaThumbnailView:(id)arg1 aspectRatio:(float)arg2 ;
-(void)setShowsEditButton:(char)arg1 ;
-(char)captionIsPlaceholder;
-(void)setThumbnailViewHidden:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGCaptionCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGCaptionCellDelegate>)delegate;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(char)isFirstResponder;
-(void)setTextView:(UITextView *)arg1 ;
-(NSRange)selectedRange;
-(id)beginningOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(void)setSelectedTextRange:(id)arg1 ;
-(id)positionFromPosition:(id)arg1 offset:(int)arg2 ;
-(int)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(void)setKeyboardType:(int)arg1 ;
-(void)selectAll;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textViewShouldBeginEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)setThumbnailView:(UIImageView *)arg1 ;
-(UIImageView *)thumbnailView;
-(UITextView *)textView;
-(IGTapButton *)editButton;
-(void)setOffsetY:(float)arg1 ;
-(float)offsetY;
@end

