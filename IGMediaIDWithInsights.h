

@class NSString, NSNumber, IGInsightsParagraphComponent;

@interface IGMediaIDWithInsights : NSObject {

	NSString* _mediaID;
	NSNumber* _impressionCount;
	NSNumber* _reachCount;
	NSNumber* _engagementCount;
	IGInsightsParagraphComponent* _inlineInsightsEducationComponent;
	IGInsightsParagraphComponent* _inlineInsightsErrorComponent;

}

@property (nonatomic,copy) NSString * mediaID;                                                             //@synthesize mediaID=_mediaID - In the implementation block
@property (nonatomic,copy) NSNumber * impressionCount;                                                     //@synthesize impressionCount=_impressionCount - In the implementation block
@property (nonatomic,copy) NSNumber * reachCount;                                                          //@synthesize reachCount=_reachCount - In the implementation block
@property (nonatomic,copy) NSNumber * engagementCount;                                                     //@synthesize engagementCount=_engagementCount - In the implementation block
@property (nonatomic,retain) IGInsightsParagraphComponent * inlineInsightsEducationComponent;              //@synthesize inlineInsightsEducationComponent=_inlineInsightsEducationComponent - In the implementation block
@property (nonatomic,retain) IGInsightsParagraphComponent * inlineInsightsErrorComponent;                  //@synthesize inlineInsightsErrorComponent=_inlineInsightsErrorComponent - In the implementation block
-(NSString *)mediaID;
-(void)setImpressionCount:(NSNumber *)arg1 ;
-(NSNumber *)impressionCount;
-(void)setMediaID:(NSString *)arg1 ;
-(NSNumber *)reachCount;
-(void)setReachCount:(NSNumber *)arg1 ;
-(NSNumber *)engagementCount;
-(void)setEngagementCount:(NSNumber *)arg1 ;
-(IGInsightsParagraphComponent *)inlineInsightsEducationComponent;
-(void)setInlineInsightsEducationComponent:(IGInsightsParagraphComponent *)arg1 ;
-(IGInsightsParagraphComponent *)inlineInsightsErrorComponent;
-(void)setInlineInsightsErrorComponent:(IGInsightsParagraphComponent *)arg1 ;
@end

