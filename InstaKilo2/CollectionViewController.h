//
//  CollectionViewController.h
//  InstaKilo2
//
//  Created by swcl on 2017-07-12.
//  Copyright © 2017 Shreve.ca. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CollectionViewController : UICollectionViewController

@property (strong, nonatomic) NSArray <UIImage *> *photos;

-(void)buildImageArray;

@end
