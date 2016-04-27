
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface IGInsightsSeeAllPostsFilterSummaryView : UIView {

	NSString* _mediaType;
	NSString* _timeframe;
	NSString* _dataOrdering;
	NSString* _skeleton;
	UILabel* _label;

}

@property (nonatomic,copy) NSString * mediaType;                 //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) NSString * timeframe;                 //@synthesize timeframe=_timeframe - In the implementation block
@property (nonatomic,copy) NSString * dataOrdering;              //@synthesize dataOrdering=_dataOrdering - In the implementation block
@property (nonatomic,copy) NSString * skeleton;                  //@synthesize skeleton=_skeleton - In the implementation block
@property (nonatomic,readonly) UILabel * label;                  //@synthesize label=_label - In the implementation block
-(void)setTimeframe:(NSString *)arg1 ;
-(void)setDataOrdering:(NSString *)arg1 ;
-(id)generatedLabelTextAttributedString;
-(NSString *)timeframe;
-(NSString *)dataOrdering;
-(void)updateMediaType:(id)arg1 timeframe:(id)arg2 dataOrdering:(id)arg3 skeleton:(id)arg4 ;
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
-(NSString *)skeleton;
-(void)setSkeleton:(NSString *)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)label;
@end

