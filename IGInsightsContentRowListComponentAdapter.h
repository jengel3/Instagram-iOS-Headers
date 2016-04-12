
#import <Instagram/IGInsightsComponentAdapter.h>

@protocol IGInsightsComponentNavigationDelegate;
@class IGInsightsContentRowListView, IGInsightsParagraphComponent, NSString;

@interface IGInsightsContentRowListComponentAdapter : NSObject <IGInsightsComponentAdapter> {

	id<IGInsightsComponentNavigationDelegate> navigationDelegate;
	IGInsightsContentRowListView* _componentView;
	IGInsightsParagraphComponent* _component;

}

@property (nonatomic,retain) IGInsightsContentRowListView * componentView;                                     //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,retain) IGInsightsParagraphComponent * component;                                         //@synthesize component=_component - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentNavigationDelegate> navigationDelegate; 
-(id)initWithComponent:(id)arg1 loggingHelper:(id)arg2 surface:(unsigned)arg3 ;
-(char)isComponentValid;
-(IGInsightsContentRowListView *)componentView;
-(void)setComponentView:(IGInsightsContentRowListView *)arg1 ;
-(IGInsightsParagraphComponent *)component;
-(void)setComponent:(IGInsightsParagraphComponent *)arg1 ;
-(id<IGInsightsComponentNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentNavigationDelegate>)arg1 ;
@end

