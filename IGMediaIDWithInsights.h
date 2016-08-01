

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
-(void)setMediaID:(NSString *)arg1 ;
-(IGInsightsParagraphComponent *)inlineInsightsErrorComponent;
-(IGInsightsParagraphComponent *)inlineInsightsEducationComponent;
-(NSNumber *)impressionCount;
-(NSNumber *)reachCount;
-(NSNumber *)engagementCount;
-(void)setImpressionCount:(NSNumber *)arg1 ;
-(void)setReachCount:(NSNumber *)arg1 ;
-(void)setEngagementCount:(NSNumber *)arg1 ;
-(void)setInlineInsightsEducationComponent:(IGInsightsParagraphComponent *)arg1 ;
-(void)setInlineInsightsErrorComponent:(IGInsightsParagraphComponent *)arg1 ;
@end

