
@class IGLocation, IGUser, IGSponsoredPostInfo, IGDate, CLLocation;


@protocol IGFeedHeaderItem <NSObject>
@property (readonly) IGLocation * location; 
@property (readonly) IGUser * user; 
@property (readonly) IGSponsoredPostInfo * sponsoredPostInfo; 
@property (readonly) IGDate * takenAt; 
@property (readonly) CLLocation * mediaCoord; 
@required
-(IGSponsoredPostInfo *)sponsoredPostInfo;
-(IGDate *)takenAt;
-(CLLocation *)mediaCoord;
-(IGUser *)user;
-(IGLocation *)location;

@end

