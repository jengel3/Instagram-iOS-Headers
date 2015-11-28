
#import <Instagram/IGMediaMetadataProtocol.h>

@class IGLocation, NSString, IGNearbyLocationDataSource, CLLocation;

@interface IGLocationMetadata : NSObject <IGMediaMetadataProtocol> {

	char _locationEnabled;
	IGLocation* _venue;
	NSString* _foursquareRequestID;
	IGNearbyLocationDataSource* _locationDataSource;
	NSString* _rawVideoLocationString;
	CLLocation* _mediaLocation;

}

@property (assign,nonatomic) char locationEnabled;                                         //@synthesize locationEnabled=_locationEnabled - In the implementation block
@property (nonatomic,retain) IGLocation * venue;                                           //@synthesize venue=_venue - In the implementation block
@property (nonatomic,retain) NSString * foursquareRequestID;                               //@synthesize foursquareRequestID=_foursquareRequestID - In the implementation block
@property (nonatomic,retain) IGNearbyLocationDataSource * locationDataSource;              //@synthesize locationDataSource=_locationDataSource - In the implementation block
@property (nonatomic,readonly) CLLocation * coordinates; 
@property (nonatomic,retain) NSString * rawVideoLocationString;                            //@synthesize rawVideoLocationString=_rawVideoLocationString - In the implementation block
@property (nonatomic,retain) CLLocation * mediaLocation;                                   //@synthesize mediaLocation=_mediaLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareToShare;
-(id)sharingInfo;
-(void)setMediaLocation:(CLLocation *)arg1 ;
-(CLLocation *)mediaLocation;
-(char)locationEnabled;
-(NSString *)rawVideoLocationString;
-(IGLocation *)venue;
-(NSString *)foursquareRequestID;
-(id)initWithMediaLocation:(id)arg1 rawVideoLocationString:(id)arg2 ;
-(void)setVenue:(IGLocation *)arg1 ;
-(void)setFoursquareRequestID:(NSString *)arg1 ;
-(IGNearbyLocationDataSource *)locationDataSource;
-(void)setLocationDataSource:(IGNearbyLocationDataSource *)arg1 ;
-(void)setRawVideoLocationString:(NSString *)arg1 ;
-(CLLocation *)coordinates;
-(void)setLocationEnabled:(char)arg1 ;
@end

