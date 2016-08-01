
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol IGFeedItemConfigurationType, IGFeedItemBusinessCellDelegate;
@class IGFeedItem, UIButton, UIView, CAShapeLayer, NSString;

@interface IGFeedItemBusinessCell : UICollectionViewCell <UIWebViewDelegate> {

	IGFeedItem* _feedItem;
	id<IGFeedItemConfigurationType> _itemConfiguration;
	id<IGFeedItemBusinessCellDelegate> _delegate;
	UIButton* _promoteButton;
	UIButton* _insightsButton;
	UIView* _lineView;
	CAShapeLayer* _circleLayer;
	NSString* _experimentValue;

}

@property (nonatomic,retain) UIButton * promoteButton;                                        //@synthesize promoteButton=_promoteButton - In the implementation block
@property (nonatomic,retain) UIButton * insightsButton;                                       //@synthesize insightsButton=_insightsButton - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                               //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * circleLayer;                                      //@synthesize circleLayer=_circleLayer - In the implementation block
@property (nonatomic,copy) NSString * experimentValue;                                        //@synthesize experimentValue=_experimentValue - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                           //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) id<IGFeedItemConfigurationType> itemConfiguration;               //@synthesize itemConfiguration=_itemConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemBusinessCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)height;
-(IGFeedItem *)feedItem;
-(void)setItemConfiguration:(id<IGFeedItemConfigurationType>)arg1 ;
-(void)setLineView:(UIView *)arg1 ;
-(id)initializePromoteButtonWithExperiment:(id)arg1 ;
-(id)initializeInsightsButtonWithExperiment:(id)arg1 ;
-(void)promoteButtonClick:(id)arg1 ;
-(void)updateCellWithFeedItem:(id)arg1 ;
-(UIButton *)promoteButton;
-(UIButton *)insightsButton;
-(void)setupPromoteButtonForFeedItem:(id)arg1 ;
-(void)setupInsightsButton;
-(CAShapeLayer *)circleLayer;
-(NSString *)experimentValue;
-(void)setupStrongPromoteButtonForFeedItem:(id)arg1 ;
-(void)setupPromoteOrganicTogglePromoteButtonForFeedItem:(id)arg1 ;
-(void)setupDefaultPromoteButtonForFeedItem:(id)arg1 ;
-(void)setupPromoteOrganicToggleInsightsButtonForFeedItem:(id)arg1 ;
-(void)setupDefaultInsightsButtonForFeedItem:(id)arg1 ;
-(void)viewAdGuidelineButtonClick:(id)arg1 ;
-(void)organicInsightsButtonClick:(id)arg1 ;
-(void)setPromoteButton:(UIButton *)arg1 ;
-(void)setInsightsButton:(UIButton *)arg1 ;
-(void)setCircleLayer:(CAShapeLayer *)arg1 ;
-(void)setExperimentValue:(NSString *)arg1 ;
-(id<IGFeedItemConfigurationType>)itemConfiguration;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemBusinessCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedItemBusinessCellDelegate>)delegate;
-(UIView *)lineView;
@end

