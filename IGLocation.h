
#import <Instagram/IGStorableObject.h>
#import <Instagram/IGStoredObject.h>

@class CLLocation, NSString, NSNumber;

@interface IGLocation : IGStorableObject <IGStoredObject> {

	CLLocation* _locationCoord;
	NSString* _name;
	NSString* _streetAddress;
	NSNumber* _externalID;
	NSString* _externalSource;
	NSString* _foursquareV2ID;
	NSString* _facebookPlacesID;
	NSString* _facebookEventsID;
	NSString* _externalIDSource;

}

@property (retain) CLLocation * locationCoord;                      //@synthesize locationCoord=_locationCoord - In the implementation block
@property (copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (copy) NSString * streetAddress;                          //@synthesize streetAddress=_streetAddress - In the implementation block
@property (retain) NSNumber * externalID;                           //@synthesize externalID=_externalID - In the implementation block
@property (retain) NSString * externalIDSource;                     //@synthesize externalIDSource=_externalIDSource - In the implementation block
@property (copy) NSString * externalSource;                         //@synthesize externalSource=_externalSource - In the implementation block
@property (copy) NSString * foursquareV2ID;                         //@synthesize foursquareV2ID=_foursquareV2ID - In the implementation block
@property (copy) NSString * facebookPlacesID;                       //@synthesize facebookPlacesID=_facebookPlacesID - In the implementation block
@property (copy) NSString * facebookEventsID;                       //@synthesize facebookEventsID=_facebookEventsID - In the implementation block
@property (readonly) int locationType; 
@property (copy,readonly) NSString * detailsString; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)centralizedStore;
+(id)unmanagedLocationWithDictionary:(id)arg1 ;
+(id)loggingIdsForLocations:(id)arg1 ;
+(id)getRaindropPlacesFromLocations:(id)arg1 ;
-(NSString *)streetAddress;
-(int)loggingPlaceSource;
-(id)loggingId;
-(CLLocation *)locationCoord;
-(void)fetchAdditionalInfo;
-(NSString *)foursquareV2ID;
-(NSString *)facebookPlacesID;
-(NSString *)facebookEventsID;
-(void)setLocationCoord:(CLLocation *)arg1 ;
-(void)setStreetAddress:(NSString *)arg1 ;
-(void)setExternalSource:(NSString *)arg1 ;
-(void)setExternalIDSource:(NSString *)arg1 ;
-(void)setFoursquareV2ID:(NSString *)arg1 ;
-(void)setFacebookPlacesID:(NSString *)arg1 ;
-(void)setFacebookEventsID:(NSString *)arg1 ;
-(NSString *)externalSource;
-(void)openInMaps;
-(NSString *)externalIDSource;
-(NSNumber *)externalID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)dictionaryRepresentation;
-(NSString *)detailsString;
-(int)locationType;
-(void)setExternalID:(NSNumber *)arg1 ;
-(char)updateWithDictionary:(id)arg1 ;
@end

