/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IGQuadtree, NSMutableArray, IGQuadtreeRegion;

@interface IGQuadtreeClusterQuery : NSObject {

	IGQuadtree* _quadtree;
	NSMutableArray* _clusters;
	IGQuadtreeRegion* _region;

}

@property (nonatomic,readonly) NSMutableArray * clusters;              //@synthesize clusters=_clusters - In the implementation block
@property (nonatomic,readonly) IGQuadtreeRegion * region;              //@synthesize region=_region - In the implementation block
-(id)initWithQuadtree:(id)arg1 ;
-(id)getNamedClusters;
-(id)getClustersForRegion:(id)arg1 maxDistance:(float)arg2 mapView:(id)arg3 existingClusters:(id)arg4 ;
-(id)initWithQuadtreePoints:(id)arg1 ;
-(IGQuadtreeRegion *)region;
-(NSMutableArray *)clusters;
@end

