
#import <Instagram/IGStorableObject.h>
#import <Instagram/IGSearchResultsLoggableItem.h>

@class IGLocation, NSArray, NSString;

@interface IGPlace : IGStorableObject <IGSearchResultsLoggableItem> {

	IGLocation* _location;
	NSArray* _mediaBundles;
	NSString* _title;
	NSString* _subtitle;
	NSString* _byline;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) IGLocation * location;               //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSArray * mediaBundles;              //@synthesize mediaBundles=_mediaBundles - In the implementation block
@property (nonatomic,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * byline;                   //@synthesize byline=_byline - In the implementation block
+(id)centralizedStore;
+(id)loggingLocationIdsForPlaces:(id)arg1 ;
+(id)pkFromDict:(id)arg1 ;
-(char)postIsBroken;
-(char)needsFetch;
-(NSArray *)mediaBundles;
-(NSString *)byline;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(IGLocation *)location;
-(id)loggingDescription;
-(char)updateWithDictionary:(id)arg1 ;
@end

