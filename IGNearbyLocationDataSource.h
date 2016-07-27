
#import <Instagram/IGLocationDataSource.h>

@class CLLocation, NSDate;

@interface IGNearbyLocationDataSource : IGLocationDataSource {

	char _preventEagerFetch;
	CLLocation* _EXIFPhotoLocation;
	CLLocation* _currentUserLocation;
	NSDate* _mediaCreationTime;

}

@property (nonatomic,retain) CLLocation * EXIFPhotoLocation;                //@synthesize EXIFPhotoLocation=_EXIFPhotoLocation - In the implementation block
@property (nonatomic,retain) CLLocation * currentUserLocation;              //@synthesize currentUserLocation=_currentUserLocation - In the implementation block
@property (nonatomic,retain) NSDate * mediaCreationTime;                    //@synthesize mediaCreationTime=_mediaCreationTime - In the implementation block
@property (assign,nonatomic) char preventEagerFetch;                        //@synthesize preventEagerFetch=_preventEagerFetch - In the implementation block
-(void)onLocationUpdated:(id)arg1 ;
-(void)setEXIFPhotoLocation:(CLLocation *)arg1 ;
-(void)setMediaCreationTime:(NSDate *)arg1 ;
-(void)fetchLocationsOrLocateUser;
-(void)setPreventEagerFetch:(char)arg1 ;
-(void)onLocationDenied:(id)arg1 ;
-(id)activeLocationFromEXIF:(char*)arg1 ;
-(void)onLocationFailed:(id)arg1 ;
-(NSDate *)mediaCreationTime;
-(CLLocation *)EXIFPhotoLocation;
-(char)preventEagerFetch;
-(void)dealloc;
-(void)reloadData;
-(id)initWithDelegate:(id)arg1 ;
-(CLLocation *)currentUserLocation;
-(void)setCurrentUserLocation:(CLLocation *)arg1 ;
@end

