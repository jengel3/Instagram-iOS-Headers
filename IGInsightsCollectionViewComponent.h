
#import <Instagram/IGInsightsComponent.h>

@class NSString, NSArray, NSDictionary, IGInsightsQuery;

@interface IGInsightsCollectionViewComponent : NSObject <IGInsightsComponent> {

	NSString* _header;
	NSString* _buttonText;
	NSArray* _mediaIDs;
	NSDictionary* _pageInfo;
	NSArray* _medias;
	IGInsightsQuery* _buttonQuery;

}

@property (nonatomic,copy,readonly) NSString * header;                     //@synthesize header=_header - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonText;                 //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaIDs;                    //@synthesize mediaIDs=_mediaIDs - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * pageInfo;               //@synthesize pageInfo=_pageInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * medias;                      //@synthesize medias=_medias - In the implementation block
@property (nonatomic,readonly) IGInsightsQuery * buttonQuery;              //@synthesize buttonQuery=_buttonQuery - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)mediaIDs;
-(IGInsightsQuery *)buttonQuery;
-(NSArray *)medias;
-(id)initWithHeader:(id)arg1 buttonText:(id)arg2 buttonQuery:(id)arg3 medias:(id)arg4 pageInfo:(id)arg5 ;
-(NSDictionary *)pageInfo;
-(id)style;
-(NSString *)header;
-(NSString *)buttonText;
@end

