
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UICollectionView, UILabel, UIButton, UIImageView, CALayer;

@interface IGCarouselView : UIView {

	UICollectionView* _collectionView;
	UILabel* _titleLabel;
	UIButton* _actionButton;
	UIImageView* _iconView;
	CALayer* _separatorLayer;
	CGPoint _startOffset;
	IGCarouselMetrics _metrics;

}

@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton;                        //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                           //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) IGCarouselMetrics metrics;                        //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) CALayer * separatorLayer;                         //@synthesize separatorLayer=_separatorLayer - In the implementation block
@property (assign,nonatomic) CGPoint startOffset;                              //@synthesize startOffset=_startOffset - In the implementation block
+(IGCarouselMetrics)metricsForWidth:(float)arg1 ;
+(IGCarouselMetrics)defaultMetrics;
-(id)layoutForMetrics:(IGCarouselMetrics)arg1 ;
-(CGRect)separatorFrame;
-(void)prepareForDragging;
-(CGPoint)targetContentOffsetForVelocity:(CGPoint)arg1 targetContentOffset:(CGPoint)arg2 ;
-(CALayer *)separatorLayer;
-(void)setSeparatorLayer:(CALayer *)arg1 ;
-(UIButton *)actionButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGPoint)startOffset;
-(UILabel *)titleLabel;
-(UICollectionView *)collectionView;
-(IGCarouselMetrics)metrics;
-(void)setStartOffset:(CGPoint)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setMetrics:(IGCarouselMetrics)arg1 ;
@end

