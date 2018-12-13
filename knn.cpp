#include <iostream>
#include <string>
#include <stdlib.h>
#include <array>
std::string Knn_(std::string& id, int k){
    array<array*, 10> list_of_neighbours_in_cluster;
    array list_of_neighbours_in_cluster = id.cluster(); /*get the list of people in the cluster of my user ID =  resultat de lalgo de jules, stocker dans la base de donnée*/
    array** total_interactions = new array*[list_of_neighbours_in_cluster.size];
    int i = 0;
    for (nei = list_of_neighbours_in_cluster.begin(); nei != list_of_neighbours_in_cluster.end(); nei++)
    {
        // Access the object through iterator
        array interactions = nei->interactions; /*il faudrait que chaque user ait une data attributes interactions qui est une liste de papier avec lequels il a interagi*/
        total_interactions[i] = &interactions;
        
    }
    array<array*,k> knn_info;
    for(l = 0;l<=k,l++) {
        n = rand() % list_of_neighbours_in_cluster.size + 1;
        knn_info[l] = total_interactions[n]; /* knn info est un liste de liste de papiers, certains papiers peuvent apparaitrent plusieurs fois*/

    }
    array<std::tuple,
    for (paper = knn_info.begin(); paper != knn_info.end();paper++){
        
            float rating_id = 
    }
}