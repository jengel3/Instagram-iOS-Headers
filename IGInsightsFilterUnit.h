

@class IGInsightsQuery, NSArray;

@interface IGInsightsFilterUnit : NSObject {

	IGInsightsQuery* _activeQuery;
	NSArray* _mediaTypeUnits;

}

@property (nonatomic,readonly) IGInsightsQuery * activeQuery;              //@synthesize activeQuery=_activeQuery - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaTypeUnits;              //@synthesize mediaTypeUnits=_mediaTypeUnits - In the implementation block
-(NSArray *)mediaTypeUnits;
-(IGInsightsQuery *)activeQuery;
-(id)initWithDictionary:(id)arg1 ;
@end

