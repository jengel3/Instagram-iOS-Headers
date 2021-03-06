
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGCustomAlertViewControllerDelegate.h>

@protocol IGFeedItemTextCellDelegate, IGFeedItemLoggingProviderDelegate;
@class IGFeedItem, IGCoreTextView, IGStyledString, NSString, UIImageView, IGAppInstallationsHelper;

@interface IGFeedItemTextCell : UICollectionViewCell <IGCoreTextLinkHandler, IGCustomAlertViewControllerDelegate> {

	char _showExploreContext;
	IGFeedItem* _feedItem;
	id<IGFeedItemTextCellDelegate> _delegate;
	IGCoreTextView* _coreTextView;
	IGStyledString* _styledString;
	NSString* _accessibilityLabelForStyledString;
	int _cellType;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	float _textHorizontalPadding;
	UIImageView* _iconView;
	IGAppInstallationsHelper* _appInstallationsHelper;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                                                     //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGCoreTextView * coreTextView;                                             //@synthesize coreTextView=_coreTextView - In the implementation block
@property (nonatomic,retain) IGStyledString * styledString;                                             //@synthesize styledString=_styledString - In the implementation block
@property (nonatomic,retain) NSString * accessibilityLabelForStyledString;                              //@synthesize accessibilityLabelForStyledString=_accessibilityLabelForStyledString - In the implementation block
@property (assign,nonatomic) int cellType;                                                              //@synthesize cellType=_cellType - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (assign,nonatomic) float textHorizontalPadding;                                               //@synthesize textHorizontalPadding=_textHorizontalPadding - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                                    //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) IGAppInstallationsHelper * appInstallationsHelper;                         //@synthesize appInstallationsHelper=_appInstallationsHelper - In the implementation block
@property (assign,nonatomic) char showExploreContext;                                                   //@synthesize showExploreContext=_showExploreContext - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemTextCellDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightWithStyledString:(id)arg1 constrainedToWidth:(float)arg2 ;
-(IGFeedItem *)feedItem;
-(void)customAlertViewDidConfirm:(id)arg1 ;
-(void)customAlertViewDidCancel:(id)arg1 ;
-(void)setStyledString:(IGStyledString *)arg1 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)setAppInstallationsHelper:(IGAppInstallationsHelper *)arg1 ;
-(IGAppInstallationsHelper *)appInstallationsHelper;
-(void)showBoomerangAppInstallAlertViewPopover;
-(void)setLoggingDelegate:(id<IGFeedItemLoggingProviderDelegate>)arg1 ;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(id)accessibleElements;
-(IGStyledString *)styledString;
-(IGCoreTextView *)coreTextView;
-(float)textHorizontalPadding;
-(void)setTextHorizontalPadding:(float)arg1 ;
-(void)setAccessibilityLabelForStyledString:(NSString *)arg1 ;
-(void)setShowExploreContext:(char)arg1 ;
-(void)handleTapOnString:(id)arg1 URL:(id)arg2 ;
-(id)styledStringForLikesWithFeedItem:(id)arg1 ;
-(id)styledStringForSocialContext:(id)arg1 ;
-(id)styledStringForMoreCommentsWithFeedItem:(id)arg1 ;
-(id)styledStringForExploreContextWithFeedItem:(id)arg1 ;
-(id)styledStringForHyperlapseAttributionWithFeedItem:(id)arg1 ;
-(id)styledStringForLayoutAttributionWithFeedItem:(id)arg1 ;
-(id)styledStringForBoomerangAttributionWithFeedItem:(id)arg1 ;
-(id)styledStringForViewCountWithFeedItem:(id)arg1 ;
-(id)styledStringForTimeStampExploreContextWithFeedItem:(id)arg1 ;
-(id)styledStringForCommentTranslationWithFeedItem:(id)arg1 ;
-(char)showExploreContext;
-(void)boomerangAttributionTapped;
-(char)isLongTapAllowedForCellType:(int)arg1 ;
-(void)setFeedItem:(id)arg1 delegate:(id)arg2 loggingDelegate:(id)arg3 textHorizontalPadding:(float)arg4 styledString:(id)arg5 cellType:(int)arg6 accessibilityLabel:(id)arg7 showExploreContext:(char)arg8 ;
-(void)setCoreTextView:(IGCoreTextView *)arg1 ;
-(NSString *)accessibilityLabelForStyledString;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(float)topPadding;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<IGFeedItemTextCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(NSString *)description;
-(id<IGFeedItemTextCellDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)prepareForReuse;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(int)cellType;
-(void)setCellType:(int)arg1 ;
@end

