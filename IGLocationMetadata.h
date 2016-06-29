
#import <Instagram/IGMediaMetadataProtocol.h>
#import <libobjc.A.dylib/NSCoding.h>

@class IGLocation, NSString, IGNearbyLocationDataSource, CLLocation, NSDictionary;

@interface IGLocationMetadata : NSObject <IGMediaMetadataProtocol, NSCoding> {

	char _locationSharingEnabled;
	IGLocation* _venue;
	NSString* _venueRequestID;
	IGNearbyLocationDataSource* _locationDataSource;
	CLLocation* _exifLocation;
	CLLocation* _avLocation;
	NSDictionary* _exifGPSDict;
	NSString* _rawVideoLocationString;

}

@property (nonatomic,readonly) CLLocation * exifLocation;                                  //@synthesize exifLocation=_exifLocation - In the implementation block
@property (nonatomic,readonly) CLLocation * avLocation;                                    //@synthesize avLocation=_avLocation - In the implementation block
@property (nonatomic,readonly) NSDictionary * exifGPSDict;                                 //@synthesize exifGPSDict=_exifGPSDict - In the implementation block
@property (nonatomic,readonly) NSString * rawVideoLocationString;                          //@synthesize rawVideoLocationString=_rawVideoLocationString - In the implementation block
@property (assign,nonatomic) char locationSharingEnabled;                                  //@synthesize locationSharingEnabled=_locationSharingEnabled - In the implementation block
@property (nonatomic,retain) IGLocation * venue;                                           //@synthesize venue=_venue - In the implementation block
@property (nonatomic,copy) NSString * venueRequestID;                                      //@synthesize venueRequestID=_venueRequestID - In the implementation block
@property (nonatomic,retain) IGNearbyLocationDataSource * locationDataSource;              //@synthesize locationDataSource=_locationDataSource - In the implementation block
@property (nonatomic,readonly) CLLocation * coordinates; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)rawVideoLocationString;
-(CLLocation *)exifLocation;
-(CLLocation *)avLocation;
-(char)locationSharingEnabled;
-(NSDictionary *)exifGPSDict;
-(NSString *)venueRequestID;
-(IGLocation *)venue;
-(void)prepareToShare;
-(id)sharingInfo;
-(id)initWithExifLocation:(id)arg1 exifGPSDict:(id)arg2 rawVideoLocationString:(id)arg3 ;
-(void)setLocationSharingEnabled:(char)arg1 ;
-(void)setVenue:(IGLocation *)arg1 ;
-(void)setVenueRequestID:(NSString *)arg1 ;
-(IGNearbyLocationDataSource *)locationDataSource;
-(void)setLocationDataSource:(IGNearbyLocationDataSource *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CLLocation *)coordinates;
@end

