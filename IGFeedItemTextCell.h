
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGAppInstallAlertViewControllerDelegate.h>

@protocol IGFeedItemLoggingProviderDelegate, IGFeedItemTextCellDelegate;
@class IGFeedItem, IGStyledString, UINavigationController, IGCoreTextView, UIImageView, UILabel, IGAppInstallationsHelper, NSString;

@interface IGFeedItemTextCell : UICollectionViewCell <IGCoreTextLinkHandler, IGAppInstallAlertViewControllerDelegate> {

	char _showTimeStamp;
	char _enableTapToViewComments;
	IGFeedItem* _feedItem;
	IGStyledString* _styledString;
	int _cellType;
	UINavigationController* _navigationController;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	float _textHorizontalPadding;
	IGCoreTextView* _coreTextView;
	id<IGFeedItemTextCellDelegate> _delegate;
	UIImageView* _iconView;
	UILabel* _auxLabel;
	IGAppInstallationsHelper* _appInstallationsHelper;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                                                     //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGStyledString * styledString;                                             //@synthesize styledString=_styledString - In the implementation block
@property (assign,nonatomic) int cellType;                                                              //@synthesize cellType=_cellType - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;                      //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic) char showTimeStamp;                                                        //@synthesize showTimeStamp=_showTimeStamp - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (assign,nonatomic) float textHorizontalPadding;                                               //@synthesize textHorizontalPadding=_textHorizontalPadding - In the implementation block
@property (assign,nonatomic) char enableTapToViewComments;                                              //@synthesize enableTapToViewComments=_enableTapToViewComments - In the implementation block
@property (nonatomic,retain) IGCoreTextView * coreTextView;                                             //@synthesize coreTextView=_coreTextView - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemTextCellDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                                    //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * auxLabel;                                                        //@synthesize auxLabel=_auxLabel - In the implementation block
@property (nonatomic,retain) IGAppInstallationsHelper * appInstallationsHelper;                         //@synthesize appInstallationsHelper=_appInstallationsHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightWithStyledString:(id)arg1 showTimeStamp:(char)arg2 constrainedToWidth:(float)arg3 ;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(void)appInstallAlertViewDidConfirm:(id)arg1 ;
-(void)setAppInstallationsHelper:(IGAppInstallationsHelper *)arg1 ;
-(IGAppInstallationsHelper *)appInstallationsHelper;
-(void)showBoomerangAppInstallAlertViewPopover;
-(id)accessibleElements;
-(void)setStyledString:(IGStyledString *)arg1 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)buildCommentReplyWithUser:(id)arg1 ;
-(IGCoreTextView *)coreTextView;
-(void)setCoreTextView:(IGCoreTextView *)arg1 ;
-(IGStyledString *)styledString;
-(void)setLoggingDelegate:(id<IGFeedItemLoggingProviderDelegate>)arg1 ;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(UILabel *)auxLabel;
-(char)showTimeStamp;
-(float)textHorizontalPadding;
-(char)shouldShowViewCount;
-(char)enableTapToViewComments;
-(void)handleTapOnString:(id)arg1 URL:(id)arg2 ;
-(void)updateAuxLabel;
-(void)updateIconWithType:(int)arg1 ;
-(id)styledStringForLikesWithFeedItem:(id)arg1 ;
-(int)iconTypeForCaption;
-(id)styledStringForMoreCommentsWithFeedItem:(id)arg1 ;
-(id)styledStringForExploreContextWithFeedItem:(id)arg1 ;
-(id)styledStringForHyperlapseAttributionWithFeedItem:(id)arg1 ;
-(id)styledStringForLayoutAttributionWithFeedItem:(id)arg1 ;
-(id)styledStringforAddCommentWithFeedItem:(id)arg1 ;
-(id)styledStringForBoomerangAttributionWithFeedItem:(id)arg1 ;
-(id)styledStringForNewBoomerangAttributionWithFeedItem:(id)arg1 ;
-(id)styledStringforFeaturedBadgeWithFeedItem:(id)arg1 ;
-(void)pushCommentsPrefilledWithText:(id)arg1 ;
-(void)setAuxLabelString:(id)arg1 ;
-(id)viewCountStringForFeedItem:(id)arg1 ;
-(void)boomerangAttributionTapped;
-(char)isLongTapAllowedForCellType:(int)arg1 ;
-(void)setEnableTapToViewComments:(char)arg1 ;
-(void)setTextHorizontalPadding:(float)arg1 ;
-(void)setShowTimeStamp:(char)arg1 ;
-(int)iconTypeForLikes;
-(void)setAuxLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<IGFeedItemTextCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGFeedItemTextCellDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)prepareForReuse;
-(UINavigationController *)navigationController;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(int)cellType;
-(void)setCellType:(int)arg1 ;
@end

