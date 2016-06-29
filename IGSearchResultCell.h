
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPlainTableViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGRaindropAnalyticsDelegate, IGSearchResultCellDelegate;
@class UIView, NSString, CALayer, UILongPressGestureRecognizer, UIImageView;

@interface IGSearchResultCell : IGPlainTableViewCell <UIGestureRecognizerDelegate> {

	char _showUnseen;
	char _showUnseenContext;
	UIView* _iconView;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;
	id<IGSearchResultCellDelegate> _delegate;
	NSString* _itemId;
	CALayer* _separatorLayer;
	UILongPressGestureRecognizer* _contentMenuLongPressRecognizer;
	UIImageView* _unseenToastView;

}

@property (nonatomic,retain) NSString * itemId;                                                          //@synthesize itemId=_itemId - In the implementation block
@property (nonatomic,readonly) CALayer * separatorLayer;                                                 //@synthesize separatorLayer=_separatorLayer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * contentMenuLongPressRecognizer;              //@synthesize contentMenuLongPressRecognizer=_contentMenuLongPressRecognizer - In the implementation block
@property (nonatomic,retain) UIImageView * unseenToastView;                                              //@synthesize unseenToastView=_unseenToastView - In the implementation block
@property (nonatomic,readonly) char showUnseen;                                                          //@synthesize showUnseen=_showUnseen - In the implementation block
@property (nonatomic,readonly) char showUnseenContext;                                                   //@synthesize showUnseenContext=_showUnseenContext - In the implementation block
@property (nonatomic,retain) UIView * iconView;                                                          //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;                   //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGSearchResultCellDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)unseenToastViewFrame;
+(id)formatedPostCount:(unsigned)arg1 ;
+(id)backgroundColor;
+(float)height;
-(void)onContentMenuPress:(id)arg1 ;
-(void)setContentMenuLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)contentMenuLongPressRecognizer;
-(CALayer *)separatorLayer;
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(char)showUnseen;
-(UIImageView *)unseenToastView;
-(float)labelMinXForIconFrame:(CGRect)arg1 ;
-(void)layoutLabels:(float)arg1 bounds:(CGRect)arg2 ;
-(void)setUnseenToastView:(UIImageView *)arg1 ;
-(char)showUnseenContext;
-(void)setHashtag:(id)arg1 ;
-(NSString *)itemId;
-(void)setItemId:(NSString *)arg1 ;
-(void)setDelegate:(id<IGSearchResultCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<IGSearchResultCellDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setIcon:(id)arg1 ;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
-(void)setPlace:(id)arg1 ;
-(void)setSearchQuery:(id)arg1 ;
@end

