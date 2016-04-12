
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol IGFeedItemBusinessCellDelegate;
@class IGFeedItem, UIButton, UIImageView, UIView, NSString;

@interface IGFeedItemBusinessCell : UICollectionViewCell <UIWebViewDelegate> {

	IGFeedItem* _feedItem;
	id<IGFeedItemBusinessCellDelegate> _delegate;
	UIButton* _promoteButton;
	UIButton* _insightsButton;
	UIImageView* _insightsIcon;
	UIView* _lineView;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                                           //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemBusinessCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * promoteButton;                                        //@synthesize promoteButton=_promoteButton - In the implementation block
@property (nonatomic,retain) UIButton * insightsButton;                                       //@synthesize insightsButton=_insightsButton - In the implementation block
@property (nonatomic,retain) UIImageView * insightsIcon;                                      //@synthesize insightsIcon=_insightsIcon - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                               //@synthesize lineView=_lineView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)height;
-(IGFeedItem *)feedItem;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)setLineView:(UIView *)arg1 ;
-(void)initializePromoteButton;
-(void)initializeInsightsButton;
-(UIButton *)insightsButton;
-(void)organicInsightsButtonClick:(id)arg1 ;
-(UIButton *)promoteButton;
-(void)setPromoteButton:(UIButton *)arg1 ;
-(void)promoteButtonClick:(id)arg1 ;
-(void)setInsightsButton:(UIButton *)arg1 ;
-(void)setInsightsIcon:(UIImageView *)arg1 ;
-(UIImageView *)insightsIcon;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemBusinessCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedItemBusinessCellDelegate>)delegate;
-(UIView *)lineView;
@end

