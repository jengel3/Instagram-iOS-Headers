
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGUFIButtonBarViewProtocol.h>

@protocol IGUFIButtonBarViewDelegate;
@class UIButton, NSArray, NSString;

@interface IGUFIButtonBarView : UIView <IGUFIButtonBarViewProtocol> {

	id<IGUFIButtonBarViewDelegate> _delegate;
	UIButton* _sendButton;
	int _colorType;
	NSArray* _accessibilityElements;
	UIButton* _likeButton;
	UIButton* _commentButton;

}

@property (assign,nonatomic) int colorType;                                               //@synthesize colorType=_colorType - In the implementation block
@property (nonatomic,retain) NSArray * accessibilityElements;                             //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (nonatomic,readonly) UIButton * likeButton;                                     //@synthesize likeButton=_likeButton - In the implementation block
@property (nonatomic,readonly) UIButton * commentButton;                                  //@synthesize commentButton=_commentButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGUFIButtonBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * sendButton;                                     //@synthesize sendButton=_sendButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSaveButton:(id)arg1 ;
-(id)saveButton;
-(id)feedItem;
-(void)shareItem:(id)arg1 ;
-(void)saveNow;
-(void)saveItem:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)accessibleElements;
-(void)adjustViewWithConstraintSize:(CGSize)arg1 ;
-(void)updateUFIButtonWithFeedItem:(id)arg1 animated:(char)arg2 ;
-(void)setSendButtonHidden:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 colorType:(int)arg2 ;
-(UIButton *)commentButton;
-(void)onLikeButtonPressed:(id)arg1 ;
-(void)onCommentButtonPressed:(id)arg1 ;
-(void)onSendButtonPressed:(id)arg1 ;
-(void)setCommentButtonHidden:(char)arg1 ;
-(void)setDelegate:(id<IGUFIButtonBarViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGUFIButtonBarViewDelegate>)delegate;
-(char)isAccessibilityElement;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(UIButton *)sendButton;
-(void)setupSubviews;
-(void)setColorType:(int)arg1 ;
-(UIButton *)likeButton;
-(int)colorType;
@end

